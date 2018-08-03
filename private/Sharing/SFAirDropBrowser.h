//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface SFAirDropBrowser : NSObject
{
    struct __SFBrowser *_browser;
    NSMutableDictionary *_nodes;
    _Bool _shouldDeliverEmptyUpdates;
    NSString *_sessionID;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
    id <SFAirDropBrowserBatchDelegate> _batchDelegate;
}

@property __weak id <SFAirDropBrowserBatchDelegate> batchDelegate; // @synthesize batchDelegate=_batchDelegate;
@property __weak id <SFAirDropBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)getChangedIndexesForClientPeopleList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)start;
- (void)dealloc;
- (id)init;

@end

