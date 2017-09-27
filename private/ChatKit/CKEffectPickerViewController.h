//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKEffectPickerViewDelegate.h"

@class CKEffectPickerView, NSAttributedString;

@interface CKEffectPickerViewController : UIViewController <CKEffectPickerViewDelegate>
{
    id <CKEffectPickerViewControllerDelegate> _delegate;
    NSAttributedString *_text;
    CKEffectPickerView *_pickerView;
    struct CGPoint _balloonViewOrigin;
    struct CGRect _sendButtonFrame;
}

@property(retain, nonatomic) CKEffectPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) struct CGPoint balloonViewOrigin; // @synthesize balloonViewOrigin=_balloonViewOrigin;
@property(nonatomic) struct CGRect sendButtonFrame; // @synthesize sendButtonFrame=_sendButtonFrame;
@property(copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(nonatomic) id <CKEffectPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)effectSelectedWithIdentifier:(id)arg1;
- (void)touchUpInsideCloseButton;
- (void)effectPickerViewDidFinishAnimatingIn:(id)arg1;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)handleTouchMoved:(struct CGPoint)arg1;
- (void)handleTouchUp:(struct CGPoint)arg1;
- (void)updateColor:(BOOL)arg1;
- (void)updateHintTransition:(double)arg1;
- (void)presentPicker;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setSemanticContentAttribute:(id)arg1 forceLTR:(_Bool)arg2;
- (id)initWithComposition:(id)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 color:(BOOL)arg4;

@end

