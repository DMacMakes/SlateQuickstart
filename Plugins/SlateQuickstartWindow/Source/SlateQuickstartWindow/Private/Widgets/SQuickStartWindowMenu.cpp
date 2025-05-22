// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/SQuickStartWindowMenu.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SQuickStartWindowMenu::Construct(const FArguments& InArgs)
{
	ChildSlot
		[
			SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Top)
						[
							SNew(STextBlock)
								.Text(FText::FromString("Test  Button"))
						]
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Top)
						[
							SNew(SButton)
								.Text(FText::FromString("Click me.. or don't."))
								.OnClicked(this, &SQuickStartWindowMenu::OnTestButtonClicked)
						]
				]
			+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Top)
						[
							SNew(STextBlock)
								.Text(FText::FromString("Test Checkbox"))
						]
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Top)
						[
							// A checkbox, and what functions should be called when it a) throws a state change event and 
							// b) when its state is being requested. Maybe.
							SNew(SCheckBox)
								.OnCheckStateChanged(this, &SQuickStartWindowMenu::OnTestCheckboxStateChanged)
								.IsChecked(this, &SQuickStartWindowMenu::IsTestBoxChecked)
								
						]
				]
			+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.VAlign(VAlign_Top)
						[
							SNew(STextBlock)
								.Text(FText::FromString("I wonder how this will make blue print changes and stuff."))
						]
				]
		];
	
}

void SQuickStartWindowMenu::OnTestCheckboxStateChanged(ECheckBoxState NewState)
{
	bIsTestBoxChecked = NewState == ECheckBoxState::Checked ? true : false;
}

ECheckBoxState SQuickStartWindowMenu::IsTestBoxChecked() const
{
	return bIsTestBoxChecked ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

FReply SQuickStartWindowMenu::OnTestButtonClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Hey what's crackin? The checkbox is %s"), (bIsTestBoxChecked ? TEXT("Checked") : TEXT("Unchecked")));
	return(FReply::Handled());
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
