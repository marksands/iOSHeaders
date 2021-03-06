//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "STGroupSpecifierProviderDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface STListViewController : PSListController <STGroupSpecifierProviderDelegate>
{
    NSArray *_specifierProviders;
    NSMutableDictionary *_cellHeightBySpecifierIdentifier;
}

@property(retain, nonatomic) NSMutableDictionary *cellHeightBySpecifierIdentifier; // @synthesize cellHeightBySpecifierIdentifier=_cellHeightBySpecifierIdentifier;
@property(copy, nonatomic) NSArray *specifierProviders; // @synthesize specifierProviders=_specifierProviders;
- (void).cxx_destruct;
- (void)specifierProvider:(id)arg1 showPINSheet:(id)arg2;
- (void)specifierProvider:(id)arg1 lazyLoadBundle:(id)arg2;
- (void)specifierProviderEndUpdates:(id)arg1;
- (void)specifierProviderBeginUpdates:(id)arg1;
- (void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)specifierProvider:(id)arg1 popToViewControllerAnimated:(_Bool)arg2;
- (void)specifierProvider:(id)arg1 showConfirmationViewForSpecifier:(id)arg2;
- (void)specifierProvider:(id)arg1 reloadSpecifier:(id)arg2 animated:(_Bool)arg3;
- (void)specifierProvider:(id)arg1 dismissViewControllerAnimated:(_Bool)arg2;
- (void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)specifierProvider:(id)arg1 showController:(id)arg2 animated:(_Bool)arg3;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserversForSpecifierProvider:(id)arg1;
- (void)addObserversForSpecifierProvider:(id)arg1;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)visibleSpecifierProviders;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

