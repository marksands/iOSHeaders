//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PVUserDefaults : NSObject
{
}

+ (unsigned long long)advancedStatusVerifiedPersonLimit;
+ (unsigned long long)advancedStatusMergeCandidateLimit;
+ (_Bool)isBlacklistDisabled;
+ (unsigned long long)faceIDModelRebuildPeriod;
+ (_Bool)faceIDModelAlwaysRebuild;
+ (unsigned int)sceneAlgorithmUmbrellaVersion;
+ (unsigned int)faceAlgorithmUmbrellaVersion;
+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (_Bool)personBuilderMergeCandidatesDisabled;
+ (_Bool)personBuildingDisabled;
+ (_Bool)faceClusteringDisabled;
+ (_Bool)suggestionsLogEnabled;
+ (unsigned long long)maxFaceCountForClustering;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (_Bool)quarantineTwinsOnAssetEnabled;
+ (unsigned long long)minimumSuggestionSize;
+ (float)facePrimarySuggestionsThreshold;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (float)faceClusteringThreshold;
+ (double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2;
+ (float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2;
+ (int)_intValueForKey:(id)arg1 defaultValue:(int)arg2;
+ (_Bool)_boolValueForKey:(id)arg1 defaultValue:(_Bool)arg2;

@end

