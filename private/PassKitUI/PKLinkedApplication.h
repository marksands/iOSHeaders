//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSArray, NSDictionary, NSHashTable, NSNumber, NSString, NSURL, SKStoreProductViewController, SSSoftwareLibraryItem, UIImage;

@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate>
{
    SSSoftwareLibraryItem *_foundLibraryItem;
    NSDictionary *_foundStoreItem;
    unsigned long long _loadingToken;
    _Bool _loaded;
    _Bool _loading;
    NSHashTable *_observers;
    SKStoreProductViewController *_presentedViewController;
    _Bool _useSmallIcon;
    NSArray *_storeIDs;
    NSURL *_defaultLaunchURL;
    UIImage *_iconImage;
}

+ (void)openApplicationWithBundleID:(id)arg1 launchURL:(id)arg2;
@property(readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) _Bool useSmallIcon; // @synthesize useSmallIcon=_useSmallIcon;
@property(copy, nonatomic) NSURL *defaultLaunchURL; // @synthesize defaultLaunchURL=_defaultLaunchURL;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
@property(readonly, nonatomic) NSString *price;
@property(readonly, nonatomic) NSNumber *averageRating;
@property(readonly, nonatomic) NSString *publisher;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct CGSize expectedIconSize;
- (_Bool)_useLibraryItem;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
@property(readonly, nonatomic) long long state;
- (void)installedApplicationsDidChangeNotification:(id)arg1;
- (void)_notifyObserversOfStateChange;
- (int)_iconOptionsForItem:(id)arg1;
- (int)_iconVariantForScale:(double)arg1;
- (id)_imageForSize:(struct CGSize)arg1 fromArtwork:(id)arg2 requireStrictMatch:(_Bool)arg3;
- (_Bool)_itemArtNeedsShine:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize)arg2 requireStrictMatch:(_Bool)arg3;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize)arg2;
- (void)_performStoreLookupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateApplicationStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_unloadApplicationState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)openApplication:(id)arg1;
- (void)reloadApplicationStateIfNecessary;
- (void)reloadApplicationState;
- (void)dealloc;
- (id)initWithStoreIDs:(id)arg1 defaultLaunchURL:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

