//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection, NSMutableDictionary;

@interface WBSAnalyticsLogger : NSObject
{
    NSMutableDictionary *_pageLoadStartTimes;
    AWDServerConnection *_awdServer;
}

+ (id)sharedLogger;
@property(readonly, nonatomic) AWDServerConnection *awdServer; // @synthesize awdServer=_awdServer;
- (void).cxx_destruct;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(_Bool)arg1 error:(id)arg2;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(_Bool)arg1;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(_Bool)arg1 localState:(long long)arg2 remoteState:(long long)arg3;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(_Bool)arg2;
- (void)didShowContactAutoFillSetsWithMeCardSets:(_Bool)arg1 showingPreviouslyCustomizedSet:(_Bool)arg2;
- (void)didAutoFillCustomContactSetShowingMeCard:(_Bool)arg1;
- (void)safeBrowsingUserActionAfterSeeingWarning:(int)arg1;
- (void)safeBrowsingWarningPageShown:(int)arg1;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (void)pageLoadStarted:(unsigned long long)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1;
- (_Bool)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end

