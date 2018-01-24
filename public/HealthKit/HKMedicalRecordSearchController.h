//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSSearchQuery, HKHealthStore, HKMedicalRecordIndexController, NSObject<OS_dispatch_queue>;

@interface HKMedicalRecordSearchController : NSObject
{
    HKMedicalRecordIndexController *_indexController;
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CSSearchQuery *_runningQuery;
}

+ (id)queryAttributes;
@property(retain, nonatomic) CSSearchQuery *runningQuery; // @synthesize runningQuery=_runningQuery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) HKMedicalRecordIndexController *indexController; // @synthesize indexController=_indexController;
- (void).cxx_destruct;
- (void)deleteAllIndexesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_normalizedQueryFromQuery:(id)arg1;
- (void)searchMedicalRecordsWithQuery:(id)arg1 healthStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)searchMedicalRecordUUIDsWithQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2;

@end

