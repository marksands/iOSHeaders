//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class SKUIDynamicPageSectionIndexMapper, SKUIIndexBarEntryListViewElement, SKUIIndexBarEntryViewElement, SKUIViewElement;

@interface SKUIIndexBarDynamicElementEntryListController : SKUIIndexBarEntryListController
{
    SKUIDynamicPageSectionIndexMapper *_dynamicIndexMapper;
    id <SKUIEntityProviding> _entityProvider;
    SKUIIndexBarEntryViewElement *_indexBarEntryViewElement;
    SKUIViewElement *_templateElement;
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
}

@property(readonly, nonatomic) SKUIIndexBarEntryListViewElement *entryListViewElement; // @synthesize entryListViewElement=_entryListViewElement;
- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (void)setRootTargetViewElement:(id)arg1;
- (id)rootTargetIndexBarEntryID;
- (void)reloadViewElementData;
- (long long)numberOfEntryDescriptors;
- (_Bool)needsRootTargetViewElement;
- (_Bool)hidesIndexBar;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithEntryListViewElement:(id)arg1;

@end

