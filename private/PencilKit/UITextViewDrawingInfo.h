//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PKTiledView, UILongPressGestureRecognizer, UITextView;
@protocol UITextViewDrawingDelegate;

@interface UITextViewDrawingInfo : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _addBottomPadding;
    UITextView *_textView;
    PKTiledView *_tiledView;
    id <UITextViewDrawingDelegate> _delegate;
    UILongPressGestureRecognizer *_insertLongPressGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *insertLongPressGestureRecognizer; // @synthesize insertLongPressGestureRecognizer=_insertLongPressGestureRecognizer;
@property(nonatomic) __weak id <UITextViewDrawingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKTiledView *tiledView; // @synthesize tiledView=_tiledView;
@property(nonatomic) _Bool addBottomPadding; // @synthesize addBottomPadding=_addBottomPadding;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateGestures;
- (void)dealloc;
- (id)initForTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

