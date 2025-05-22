// Fill out your copyright notice in the Description page of Project Settings.


#include "SRedoQSWindowMenu.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SRedoQSWindowMenu::Construct(const FArguments& InArgs)
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
							.Text(FText::FromString("Do whatever."))
					]
			]// Populate the widget
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Top)
					[
						SNew(STextBlock)
							.Text(FText::FromString("A checkbox"))
					]
					+ SHorizontalBox::Slot()
					.VAlign(VAlign_Top)
					[
						SNew(SCheckBox)
					]
			]// Populate the widget
	];
	
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
