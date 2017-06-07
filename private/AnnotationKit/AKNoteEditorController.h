//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKNoteEditorViewControllerDelegate-Protocol.h>
#import <AnnotationKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AKNoteEditorViewController, AKPopupAnnotation, NSString;
@protocol AKNoteEditorControllerDelegate;

@interface AKNoteEditorController : NSObject <AKNoteEditorViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    AKPopupAnnotation *_annotation;
    id <AKNoteEditorControllerDelegate> _delegate;
    AKNoteEditorViewController *_contentViewController;
}

@property(retain) AKNoteEditorViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak id <AKNoteEditorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AKPopupAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (id)_popupBackgroundColorForPopupAnnotation:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)noteEditorViewControllerDidEndEditing:(id)arg1;
- (void)noteEditorViewControllerDidBeginEditing:(id)arg1;
- (void)finishEditing;
- (void)beginEditing:(_Bool)arg1;
- (double)suggestedEditorHeightForWidth:(double)arg1;
@property(readonly, nonatomic) NSString *editedText;
- (void)hide;
- (void)show:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

