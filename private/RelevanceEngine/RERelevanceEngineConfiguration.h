//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "REIndentedDescription.h"

@class NSArray, NSMutableArray, NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager;

@interface RERelevanceEngineConfiguration : NSObject <REIndentedDescription, NSCopying, NSMutableCopying>
{
    NSURL *_modelFileURL;
    NSURL *_baseModelFileURL;
    _Bool _allowsUpdatingModelFile;
    REDataSourceLoader *_dataSourceLoader;
    unsigned long long _trainingBehavior;
    RELocationManager *_locationManager;
    NSMutableArray *_sectionDescriptions;
    NSMutableArray *_interactionDescriptions;
    REFeatureSet *_featureSet;
    _Bool _wantsImmutableContent;
    NSString *_preferenceDomain;
    _Bool _allowsRemoteTraining;
    _Bool _wantsBackup;
    _Bool _ignoreDeviceLockState;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool ignoreDeviceLockState;
@property(readonly, nonatomic) _Bool wantsBackup;
@property(readonly, nonatomic) _Bool allowsRemoteTraining;
@property(readonly, nonatomic) NSString *preferenceDomain;
@property(readonly, nonatomic) _Bool wantsImmutableContent;
@property(readonly, copy, nonatomic) REFeatureSet *primaryFeatures;
@property(readonly, nonatomic) RELocationManager *locationManager;
@property(readonly, copy, nonatomic) NSArray *interactionDescriptors;
@property(readonly, copy, nonatomic) NSArray *sectionDescriptors;
@property(readonly, nonatomic) unsigned long long trainingBehavior;
@property(readonly, copy, nonatomic) REDataSourceLoader *dataSourceLoader;
@property(readonly, nonatomic) _Bool allowsUpdatingModelFile;
@property(readonly, copy, nonatomic) NSURL *baseModelFileURL;
@property(readonly, copy, nonatomic) NSURL *modelFileURL;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithModelFileURL:(id)arg1 baseModelFileURL:(id)arg2 allowsUpdatingModelFile:(_Bool)arg3 dataSourceLoader:(id)arg4 trainingBehavior:(unsigned long long)arg5 sectionDescriptions:(id)arg6 locationManager:(id)arg7 featureSet:(id)arg8 wantsImmutableContent:(_Bool)arg9 preferenceDomain:(id)arg10 interactionDescriptions:(id)arg11 allowsRemoteTraining:(_Bool)arg12 wantsBackup:(_Bool)arg13 ignoreDeviceLockState:(_Bool)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

