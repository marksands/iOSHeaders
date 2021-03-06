//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMLibraryPlist, NSObject<OS_dispatch_queue>;

@interface BLLibrary : NSObject
{
    IMLibraryPlist *_booksPlist;
    IMLibraryPlist *_purchasedPlist;
    IMLibraryPlist *_managedPlist;
    IMLibraryPlist *_sharedPlist;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (_Bool)_addDate:(id)arg1 toPlist:(id)arg2 bookItem:(id)arg3 error:(id *)arg4;
+ (id)defaultBookLibrary;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) IMLibraryPlist *sharedPlist; // @synthesize sharedPlist=_sharedPlist;
@property(retain, nonatomic) IMLibraryPlist *managedPlist; // @synthesize managedPlist=_managedPlist;
@property(retain, nonatomic) IMLibraryPlist *purchasedPlist; // @synthesize purchasedPlist=_purchasedPlist;
@property(retain, nonatomic) IMLibraryPlist *booksPlist; // @synthesize booksPlist=_booksPlist;
- (void).cxx_destruct;
- (void)_cancelPurge;
- (long long)_periodicPurgeVolume:(id)arg1 urgency:(long long)arg2 requested:(id)arg3;
- (long long)_purgeVolume:(id)arg1 urgency:(long long)arg2 requested:(id)arg3;
- (long long)_purgeableAmountForVolume:(id)arg1 urgency:(long long)arg2;
- (long long)_recoverSpace:(long long)arg1 fromList:(id)arg2 withMaxPriority:(long long)arg3;
- (long long)_purgeOrphanedBooks;
- (id)_orphanedBookURLs;
- (void)_deleteBooksFromSharedPlist:(id)arg1;
- (id)_scoredSharedBooksWithinVolume:(id)arg1;
- (_Bool)bookItem:(id)arg1 isWithinVolume:(id)arg2;
- (void)_bookWasOpenedWithStoreID:(id)arg1 permlink:(id)arg2 date:(id)arg3;
- (_Bool)_bookItemIsShared:(id)arg1;
- (_Bool)_addSharedBookToPurchasesPlistWithPermlink:(id)arg1 error:(id *)arg2;
- (void)_downloadWithPermalink:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)_perUserBookURLForBookURL:(id)arg1;
- (_Bool)_isShareableBook:(id)arg1;
- (_Bool)_isMultiUser;
- (id)_bookItemFromPermlink:(id)arg1 error:(id *)arg2;
- (id)_bookItemFromStoreID:(id)arg1 permlink:(id)arg2 error:(id *)arg3;
- (id)_findBookItemWithTestBlock:(CDUnknownBlockType)arg1 foundWhere:(long long *)arg2;
- (id)_list:(id)arg1 testBlock:(CDUnknownBlockType)arg2;
- (id)_allPlists;
- (id)bookIdentifierFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)_removeBookFromLibraryWithPath:(id)arg1 error:(id *)arg2;
- (_Bool)removeBookFromLibraryWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_addBookItemToEduContainer:(id)arg1 error:(id *)arg2;
- (id)_lookupBookItemExhaustiveFromPermlink:(id)arg1 error:(id *)arg2;
- (void)addITunesUBookToLibraryWithPermlink:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)allBookItems;
- (id)_bookItemsFromPlist:(id)arg1;
- (id)init;

@end

