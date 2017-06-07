//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDDemoDataActivitySampleGenerator, HDDemoDataBloodSampleGenerator, HDDemoDataBodySampleGenerator, HDDemoDataFoodSampleGenerator, HDDemoDataGeneratorState, HDDemoDataHealthDocumentSampleGenerator, HDDemoDataMindfulnessSampleGenerator, HDDemoDataPathologySampleGenerator, HDDemoDataPerson, HDDemoDataReproductiveHealthSampleGenerator, HDDemoDataSleepSampleGenerator, HDDemoDataStatisticsSampleGenerator, HDDemoDataVitalsSampleGenerator, HDProfile, NSArray, NSCalendar, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDDemoDataGenerator : NSObject <HDHealthDaemonReadyObserver>
{
    NSArray *_sampleGenerators;
    HDProfile *_profile;
    NSMutableDictionary *_appProvenances;
    HDDemoDataGeneratorState *_generatorState;
    NSCalendar *_gregorianCalendar;
    long long _numHKSamples;
    _Bool _isGeneratingDemoData;
    NSObject<OS_dispatch_queue> *_demoDataQueue;
    NSObject<OS_dispatch_source> *_demoDataTimer;
    HDDemoDataPerson *_demoPerson;
    HDDemoDataActivitySampleGenerator *_activitySampleGenerator;
    HDDemoDataBloodSampleGenerator *_bloodSampleGenerator;
    HDDemoDataBodySampleGenerator *_bodySampleGenerator;
    HDDemoDataFoodSampleGenerator *_foodSampleGenerator;
    HDDemoDataHealthDocumentSampleGenerator *_healthDocumentSampleGenerator;
    HDDemoDataPathologySampleGenerator *_pathologySampleGenerator;
    HDDemoDataReproductiveHealthSampleGenerator *_reproductiveHealthSampleGenerator;
    HDDemoDataSleepSampleGenerator *_sleepSampleGenerator;
    HDDemoDataStatisticsSampleGenerator *_statisticsSampleGenerator;
    HDDemoDataVitalsSampleGenerator *_vitalsSampleGenerator;
    HDDemoDataMindfulnessSampleGenerator *_mindfulnessSampleGenerator;
}

@property(readonly, nonatomic) HDDemoDataGeneratorState *generatorState; // @synthesize generatorState=_generatorState;
@property(retain, nonatomic) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator; // @synthesize mindfulnessSampleGenerator=_mindfulnessSampleGenerator;
@property(retain, nonatomic) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator; // @synthesize vitalsSampleGenerator=_vitalsSampleGenerator;
@property(retain, nonatomic) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator; // @synthesize statisticsSampleGenerator=_statisticsSampleGenerator;
@property(retain, nonatomic) HDDemoDataSleepSampleGenerator *sleepSampleGenerator; // @synthesize sleepSampleGenerator=_sleepSampleGenerator;
@property(retain, nonatomic) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator; // @synthesize reproductiveHealthSampleGenerator=_reproductiveHealthSampleGenerator;
@property(retain, nonatomic) HDDemoDataPathologySampleGenerator *pathologySampleGenerator; // @synthesize pathologySampleGenerator=_pathologySampleGenerator;
@property(retain, nonatomic) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator; // @synthesize healthDocumentSampleGenerator=_healthDocumentSampleGenerator;
@property(retain, nonatomic) HDDemoDataFoodSampleGenerator *foodSampleGenerator; // @synthesize foodSampleGenerator=_foodSampleGenerator;
@property(retain, nonatomic) HDDemoDataBodySampleGenerator *bodySampleGenerator; // @synthesize bodySampleGenerator=_bodySampleGenerator;
@property(retain, nonatomic) HDDemoDataBloodSampleGenerator *bloodSampleGenerator; // @synthesize bloodSampleGenerator=_bloodSampleGenerator;
@property(retain, nonatomic) HDDemoDataActivitySampleGenerator *activitySampleGenerator; // @synthesize activitySampleGenerator=_activitySampleGenerator;
@property(retain, nonatomic) HDDemoDataPerson *demoPerson; // @synthesize demoPerson=_demoPerson;
- (void).cxx_destruct;
- (id)currentDateFromCurrentTime:(double)arg1;
- (long long)firstSampleDayOfYear;
- (id)firstSampleDate;
- (id)gregorianCalendar;
- (_Bool)isDifferentDayFromTime:(double)arg1;
- (double)_initialGenerationTimeWithCurrentDate:(id)arg1;
- (_Bool)_queue_unarchiveFromDirectoryPath:(id)arg1;
- (void)_archiveToDirectoryPath:(id)arg1;
- (id)_unarchiveDataWithClass:(Class)arg1 atDirectoryPath:(id)arg2;
- (_Bool)_archiveObject:(id)arg1 toDirectoryPath:(id)arg2;
- (id)_stateDirectory;
- (void)_updateWorkoutConfigurationInGeneratorState;
- (id)_watchProvenanceWithPerson:(id)arg1;
- (id)_phoneProveance;
- (id)_appProvenanceWithBundleIdentifier:(id)arg1;
- (id)_appSourceWithBundleIdentifier:(id)arg1;
- (void)_insertIntoDatabaseObjectCollection:(id)arg1 fromPerson:(id)arg2;
- (void)_insertMedicalIDForDemoPerson:(id)arg1;
- (void)_insertBiographicalDataFromDemoPerson:(id)arg1;
- (void)_queue_generateDataForDemoPerson:(id)arg1 numIntervals:(long long)arg2;
- (void)_queue_generateFirstRunDataForDemoPerson:(id)arg1;
- (void)_runAchievementDoctorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_generateDataForDemoPerson:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 firstRun:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_queue_setupDemoDataSampleGenerators;
- (_Bool)_queue_loadDemoDataSampleGeneratorState;
- (void)_queue_initDemoDataSampleGenerators;
- (void)_queue_runDemoDataGeneratorForDemoPerson:(id)arg1 currentDate:(id)arg2;
- (void)_queue_generateDemoDataIfNeeded;
- (void)_triggerDemoDataGenerationAfterTimeInterval:(double)arg1;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

