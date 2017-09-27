//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import "SXDataTableComponentControllerDataSource.h"
#import "SXDataTableViewDataSource.h"
#import "SXTangierControllerDelegate.h"
#import "SXViewportChangeListener.h"
#import "UIGestureRecognizerDelegate.h"

@class CALayer, NSString, STScrollView, SXDataTableBlueprint, SXDataTableComponentController, SXDataTableDictionary, SXDataTableView, SXTangierController;

@interface SXDataTableComponentView : SXComponentView <SXDataTableComponentControllerDataSource, SXDataTableViewDataSource, SXTangierControllerDelegate, SXViewportChangeListener, UIGestureRecognizerDelegate>
{
    SXDataTableView *_tableView;
    SXDataTableComponentController *_dataTableComponentController;
    SXDataTableBlueprint *_blueprint;
    SXDataTableDictionary *_textViews;
    SXDataTableDictionary *_imageViews;
    STScrollView *_scrollView;
    SXTangierController *_tangierController;
    CALayer *_rightShadow;
    CALayer *_leftShadow;
}

@property(retain, nonatomic) CALayer *leftShadow; // @synthesize leftShadow=_leftShadow;
@property(retain, nonatomic) CALayer *rightShadow; // @synthesize rightShadow=_rightShadow;
@property(retain, nonatomic) SXTangierController *tangierController; // @synthesize tangierController=_tangierController;
@property(retain, nonatomic) STScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) SXDataTableDictionary *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) SXDataTableDictionary *textViews; // @synthesize textViews=_textViews;
@property(retain, nonatomic) SXDataTableBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property(retain, nonatomic) SXDataTableComponentController *dataTableComponentController; // @synthesize dataTableComponentController=_dataTableComponentController;
@property(retain, nonatomic) SXDataTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)descriptorForIndexPath:(CDStruct_2fea82da)arg1;
- (id)contentViewForBehavior:(id)arg1;
- (void)updateShadowOpacity;
- (void)setupShadowsIfNeeded;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tangierControllerDidScroll:(id)arg1;
- (void)addTextStorageForIndexPath:(CDStruct_2fea82da)arg1 toCollectior:(id)arg2;
- (void)updateTangierController;
- (id)textComponentLayoutHostingForDataTableComponentController:(id)arg1;
- (id)contentSizeCategoryForDataTableComponentController:(id)arg1;
- (id)documentColumnLayoutForDataTableComponentController:(id)arg1;
- (id)documentControllerForDataTableComponentController:(id)arg1;
- (id)componentForDataTableComponentController:(id)arg1;
- (double)widthForDataTableComponentController:(id)arg1;
- (id)dataTableView:(id)arg1 viewForCellAtIndexPath:(CDStruct_2fea82da)arg2 constraintToSize:(struct CGSize)arg3;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)presentComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

