//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, SXLayoutBlueprint, SXLayoutOperation;
@protocol SXLayoutControllerDelegate;

@interface SXLayoutController : NSObject
{
    id <SXLayoutControllerDelegate> _delegate;
    NSString *_targetComponentIdentifier;
    SXLayoutBlueprint *_lastLayoutBlueprint;
    NSOperationQueue *_layoutOperationQueue;
    SXLayoutOperation *_currentLayoutOperation;
}

@property(retain, nonatomic) SXLayoutOperation *currentLayoutOperation; // @synthesize currentLayoutOperation=_currentLayoutOperation;
@property(readonly, nonatomic) NSOperationQueue *layoutOperationQueue; // @synthesize layoutOperationQueue=_layoutOperationQueue;
@property(readonly, nonatomic) SXLayoutBlueprint *lastLayoutBlueprint; // @synthesize lastLayoutBlueprint=_lastLayoutBlueprint;
@property(retain, nonatomic) NSString *targetComponentIdentifier; // @synthesize targetComponentIdentifier=_targetComponentIdentifier;
@property(nonatomic) __weak id <SXLayoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finalizeLayoutForLayoutOperation:(id)arg1;
- (void)layoutForViewportSize:(struct CGSize)arg1 existingLayoutBlueprint:(id)arg2 dataProvider:(id)arg3 andAttributes:(id)arg4;
- (void)layoutForViewportSize:(struct CGSize)arg1 dataProvider:(id)arg2 andAttributes:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

