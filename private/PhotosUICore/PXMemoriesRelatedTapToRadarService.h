//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXDiagnosticsService.h>

@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService
{
}

+ (_Bool)isServiceAvailableForProviders:(id)arg1;
- (id)contextualViewController;
- (id)settingsViewController;
- (_Bool)canProvideSettingsViewController;
- (_Bool)canProvideContextualViewController;
- (id)snapshotMemoriesRelatedResults:(id)arg1 error:(id *)arg2;
- (void)writeErrorsToErrorLog:(id)arg1;
- (void)writeLibraryStatistics:(id)arg1 analysisClient:(id)arg2 errorLists:(id)arg3;
- (void)writeMemoriesSummary:(id)arg1 analysisClient:(id)arg2 errorLists:(id)arg3;
- (void)writeGraphStatistics:(id)arg1 errorLists:(id)arg2;
- (void)writeGraphData:(id)arg1 errorLists:(id)arg2;
- (id)tapToRadarURLWithTitle:(id)arg1 descriptionString:(id)arg2;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)parseProviderItemsSummary:(id)arg1 error:(id *)arg2;
- (id)_providerItemsSummary;
- (id)_libraryStatDictionary;
- (id)consoleDescription;
- (_Bool)canProvideConsoleDescription;
- (id)title;

@end

