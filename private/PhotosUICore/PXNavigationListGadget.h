//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXNavigationListController.h>

#import "PLNavigableCollectionContainer.h"
#import "PXGadget.h"
#import "PXNavigationListContainer.h"

@class NSString, PXGadgetSpec;

@interface PXNavigationListGadget : PXNavigationListController <PXNavigationListContainer, PXGadget, PLNavigableCollectionContainer>
{
    _Bool _preferredHeightNeedsUpdate;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    struct CGRect _visibleContentRect;
}

@property(nonatomic) struct CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (void)_updateTableViewForVisibleContentRect;
- (void)listViewController:(id)arg1 listViewDidChangeContentSize:(struct CGSize)arg2;
- (id)_listItemForCollection:(id)arg1;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canNavigateToCollection:(id)arg1;
- (struct NSObject *)contentViewController;
@property(readonly, nonatomic) NSString *localizedTitle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)viewWillLayoutSubviews;
- (void)_updateTableViewLayoutMargins;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(nonatomic) unsigned long long priority;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;

@end

