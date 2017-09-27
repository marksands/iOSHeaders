//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, SFBrowserStateSQLiteStore;

@interface _SFBrowserSavedState : NSObject
{
    NSArray *_browserControllerUUIDs;
    SFBrowserStateSQLiteStore *_browserStateSQLiteStore;
    NSMutableArray *_recentlyClosedTabs;
    _Bool _checkPointWriteAheadLogOnNextUpdate;
    _Bool _secureDeleteEnabled;
}

+ (id)ephemeralSavedState;
+ (void)setSharedBrowserSavedState:(id)arg1;
+ (id)sharedBrowserSavedState;
@property(nonatomic) _Bool secureDeleteEnabled; // @synthesize secureDeleteEnabled=_secureDeleteEnabled;
@property(retain, nonatomic) NSArray *recentlyClosedTabs; // @synthesize recentlyClosedTabs=_recentlyClosedTabs;
- (void).cxx_destruct;
- (void)clearRecentlyClosedTabs;
- (void)removeRecentlyClosedTabWithData:(id)arg1;
- (void)addRecentlyClosedTabWithData:(id)arg1;
- (void)removeTabStateWithTabData:(id)arg1;
- (id)readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (void)updateBrowserWindowState:(id)arg1 tabs:(id)arg2;
- (void)clearAllSavedStatesAndCloseDatabase;
- (void)saveTabStateData:(id)arg1;
- (_Bool)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1;
- (void)setActiveDocumentIsValid:(_Bool)arg1 forBrowserControllerWithUUID:(id)arg2;
- (void)removeTabsStateForBrowserControllerWithUUID:(id)arg1 andRemoveWindow:(_Bool)arg2;
- (void)_checkPointWriteAheadLogIfNeeded;
- (void)saveTabsState:(id)arg1 forBrowserControllerWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1;
@property(copy, nonatomic) NSArray *browserControllerUUIDs;
- (void)_readBrowserControllersSavedState;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;
- (id)initWithInMemoryDatabase;

@end

