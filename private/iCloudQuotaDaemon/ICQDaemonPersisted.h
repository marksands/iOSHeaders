//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface ICQDaemonPersisted : NSObject
{
    _Bool _failedToFetchFromServer;
    NSDate *_retrievalDate;
    double _callbackInterval;
    NSString *_accountAltDSID;
    NSDictionary *_serverDictionary;
    NSDictionary *_failureDetails;
}

+ (id)_mutablePlaceholderPersistanceDictionary;
+ (double)defaultCallbackInterval;
+ (id)persistenceKey;
+ (id)persistenceDomain;
+ (void)clearPersistedObjectWithCompletion:(CDUnknownBlockType)arg1;
+ (void)clearPersistedObject;
+ (id)persistedObject;
+ (id)_placeholderObject;
+ (id)_placeholderPersistenceDictionary;
@property(retain, nonatomic) NSDictionary *failureDetails; // @synthesize failureDetails=_failureDetails;
@property(nonatomic) _Bool failedToFetchFromServer; // @synthesize failedToFetchFromServer=_failedToFetchFromServer;
@property(retain, nonatomic) NSDictionary *serverDictionary; // @synthesize serverDictionary=_serverDictionary;
@property(retain, nonatomic) NSString *accountAltDSID; // @synthesize accountAltDSID=_accountAltDSID;
@property(nonatomic) double callbackInterval; // @synthesize callbackInterval=_callbackInterval;
@property(retain, nonatomic) NSDate *retrievalDate; // @synthesize retrievalDate=_retrievalDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *_cachedQuotaAvailable;
- (double)_callbackIntervalFromServerObject:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *_mutablePersistenceDictionary;
- (id)_initWithAccountAltDSID:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isValidForAccount:(id)arg1;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (void)persistWithCompletion:(CDUnknownBlockType)arg1;
- (void)persistObject;
@property(readonly, nonatomic) NSDictionary *_persistenceDictionary;

@end
