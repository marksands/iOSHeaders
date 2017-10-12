//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@interface PSUICarrierSpaceUsageController : PSListController
{
}

- (id)remainingCreditDescription:(id)arg1;
- (_Bool)shouldShowRemainingCredit:(id)arg1;
- (id)messagesDescription:(id)arg1;
- (_Bool)shouldShowMessages:(id)arg1;
- (id)callsDescription:(id)arg1;
- (_Bool)shouldShowCalls:(id)arg1;
- (id)dataUsageDescription:(id)arg1;
- (_Bool)shouldShowData:(id)arg1;
- (_Bool)shouldShowPlanSection:(id)arg1;
- (id)usageGraphSpecifierForSection:(id)arg1;
- (id)specifiers;
- (_Bool)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg1;
- (_Bool)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
- (_Bool)hasMultipleDevicesOfTheSameType;
- (id)planCategorySectionLabelForPlanMetrics:(id)arg1;
- (id)deviceTypeSectionLabelForAccountMetrics:(id)arg1;
- (id)usageSections;
- (id)usageCategories;
- (id)barGraphColors;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)carrierSpaceChanged;
- (void)simStatusChanged;

@end
