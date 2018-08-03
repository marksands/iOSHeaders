//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class NSObject<STRootViewModelCoordinator>, STUsageItem, STUsageReportGraphDataSet;

@interface STMostUsedScreenTimeGroupSpecifierProvider : STGroupSpecifierProvider
{
    STUsageReportGraphDataSet *_graphDataSet;
    STUsageItem *_usageItem;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    unsigned long long _numberOfNotifications;
}

@property(readonly, nonatomic) unsigned long long numberOfNotifications; // @synthesize numberOfNotifications=_numberOfNotifications;
@property(readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;
- (void).cxx_destruct;
- (id)notifications:(id)arg1;
- (id)afterBedtimeUse:(id)arg1;
- (id)dailyAverage:(id)arg1;
@property(readonly, nonatomic) STUsageReportGraphDataSet *graphDataSet; // @synthesize graphDataSet=_graphDataSet;
- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;

@end

