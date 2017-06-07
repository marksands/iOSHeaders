//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController;

@interface AKToolController : NSObject
{
    _Bool _allInkEnabled;
    _Bool _pencilInkEnabled;
    unsigned long long _toolMode;
    AKController *_controller;
}

+ (void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(_Bool)arg3;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property _Bool pencilInkEnabled; // @synthesize pencilInkEnabled=_pencilInkEnabled;
@property _Bool allInkEnabled; // @synthesize allInkEnabled=_allInkEnabled;
@property(nonatomic) unsigned long long toolMode; // @synthesize toolMode=_toolMode;
- (void).cxx_destruct;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;
- (unsigned long long)_arrowStyleForToolTag:(long long)arg1;
- (void)_setRectangleToFitTextOnTextAnnotation:(id)arg1;
- (id)_defaultFillableColor;
- (id)_defaultHeartTypingAttributesWithFillColor:(id)arg1;
- (id)_defaultTextBoxTypingAttributes;
- (id)_defaultTypingAttributes;
- (struct CGRect)_validatedRect:(struct CGRect)arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 ownedByPageController:(id)arg3 centeredAtPoint:(struct CGPoint)arg4;
- (struct CGRect)_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (struct CGPoint)_defaultCenterForNewAnnotation;
- (struct CGRect)_centerBounds:(struct CGRect)arg1 atPoint:(struct CGPoint)arg2;
- (double)_strokeWidthForNewAnnotation;
- (double)_modelBaseScaleFactorForNewAnnotation;
- (unsigned long long)defaultToolMode;
- (void)resetToDefaultMode;
@property(readonly, nonatomic) _Bool isInDefaultMode;
- (void)updateToolSenderState:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)isToolSenderEnabled:(id)arg1;
- (void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(_Bool)arg3 shouldCascade:(_Bool)arg4;
- (id)createAnnotationOfType:(long long)arg1 centeredAtPoint:(struct CGPoint)arg2;
- (void)performToolActionForSender:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

