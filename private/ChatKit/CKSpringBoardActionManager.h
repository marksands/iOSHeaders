//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKContactsSearchManagerDelegate.h"

@class CKContactsSearchManager, NSArray, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate>
{
    CKContactsSearchManager *_contactsSearchManager;
    NSArray *_conversationCache;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *conversationCache; // @synthesize conversationCache=_conversationCache;
@property(retain, nonatomic) CKContactsSearchManager *contactsSearchManager; // @synthesize contactsSearchManager=_contactsSearchManager;
- (void).cxx_destruct;
- (void)chatStateChanged:(id)arg1;
- (id)conversationCacheForContactsSearchManager:(id)arg1;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (void)updateShortcutItems;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

