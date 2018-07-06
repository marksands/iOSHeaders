//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineConfiguration.h>

@class NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager;

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration
{
}

+ (id)defaultConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool ignoreDeviceLockState; // @dynamic ignoreDeviceLockState;
@property(nonatomic) _Bool wantsBackup; // @dynamic wantsBackup;
@property(nonatomic) _Bool allowsRemoteTraining; // @dynamic allowsRemoteTraining;
@property(copy, nonatomic) NSString *preferenceDomain; // @dynamic preferenceDomain;
@property(nonatomic) _Bool wantsImmutableContent; // @dynamic wantsImmutableContent;
@property(copy, nonatomic) REFeatureSet *primaryFeatures; // @dynamic primaryFeatures;
- (void)removeInteractionAtIndex:(unsigned long long)arg1;
- (long long)_indexOfInteractionWithName:(id)arg1;
- (void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addInteractionWithDescriptor:(id)arg1;
- (void)removeSectionAtIndex:(unsigned long long)arg1;
- (void)removeSectionWithName:(id)arg1;
- (long long)_indexOfSectionWithName:(id)arg1;
@property(retain, nonatomic) RELocationManager *locationManager; // @dynamic locationManager;
- (void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSectionWithDescriptor:(id)arg1;
@property(nonatomic) unsigned long long trainingBehavior; // @dynamic trainingBehavior;
@property(copy, nonatomic) REDataSourceLoader *dataSourceLoader; // @dynamic dataSourceLoader;
@property(nonatomic) _Bool allowsUpdatingModelFile; // @dynamic allowsUpdatingModelFile;
@property(copy, nonatomic) NSURL *baseModelFileURL; // @dynamic baseModelFileURL;
@property(copy, nonatomic) NSURL *modelFileURL; // @dynamic modelFileURL;

@end

