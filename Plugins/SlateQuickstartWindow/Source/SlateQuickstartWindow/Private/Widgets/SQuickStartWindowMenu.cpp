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
							SNew(SCheckBox)

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

void onTestCheckboxStateChanged(ECheckBoxState NewState)
{
	bIsTextBoxChecked = NewState == ECheckBoxState::Checked ? true : false;
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
