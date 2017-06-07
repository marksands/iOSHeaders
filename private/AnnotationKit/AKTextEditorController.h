//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/NSTextStorageDelegate-Protocol.h>
#import <AnnotationKit/UITextViewDelegate-Protocol.h>

@class AKAnnotation, AKController, AKPageController, CALayer, NSString, NSTextStorage, NSUndoManager, UITextView, UIView;
@protocol AKTextAnnotationProtocol;

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate>
{
    _Bool _isInEndEditing;
    _Bool _isInAdjustAnnotationFrameToFitText;
    UITextView *_textView;
    AKAnnotation<AKTextAnnotationProtocol> *_annotation;
    AKController *_controller;
    AKPageController *_pageController;
    CALayer *_textViewMaskLayer;
    UIView *_textViewContainer;
    NSTextStorage *_textStorage;
    double _renderingTextStorageScaleFactor;
    double _modelToEditorScaleFactor;
    double _handleCompensatingScaleFactor;
    NSUndoManager *_textViewUndoManager;
}

@property _Bool isInAdjustAnnotationFrameToFitText; // @synthesize isInAdjustAnnotationFrameToFitText=_isInAdjustAnnotationFrameToFitText;
@property _Bool isInEndEditing; // @synthesize isInEndEditing=_isInEndEditing;
@property(retain) NSUndoManager *textViewUndoManager; // @synthesize textViewUndoManager=_textViewUndoManager;
@property double handleCompensatingScaleFactor; // @synthesize handleCompensatingScaleFactor=_handleCompensatingScaleFactor;
@property double modelToEditorScaleFactor; // @synthesize modelToEditorScaleFactor=_modelToEditorScaleFactor;
@property double renderingTextStorageScaleFactor; // @synthesize renderingTextStorageScaleFactor=_renderingTextStorageScaleFactor;
@property(retain) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain) CALayer *textViewMaskLayer; // @synthesize textViewMaskLayer=_textViewMaskLayer;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property __weak AKAnnotation<AKTextAnnotationProtocol> *annotation; // @synthesize annotation=_annotation;
@property(retain) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)_keyboardDidHide:(id)arg1;
- (void)_unregisterForKeyboardNotifications;
- (void)_registerForKeyboardNotifications;
- (void)_updateTextView:(id)arg1 withFrame:(struct CGRect)arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4;
- (struct CGRect)_editorFrameForTextBoundsInModel:(struct CGRect)arg1;
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;
- (void)_adjustAnnotationFrameToFitText;
- (id)_newScaledPaths:(id)arg1 withScaleFactor:(double)arg2 aboutCenter:(struct CGPoint)arg3;
- (void)_performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool isEditing;
- (void)updateForTextAttributeChange;
- (void)_endEditing;
- (void)_commitToModelWithoutEndingEditing;
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(_Bool)arg3;
- (void)endEditing;
- (void)commitToModelWithoutEndingEditing;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(_Bool)arg3;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

