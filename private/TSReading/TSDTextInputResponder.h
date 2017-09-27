//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIResponderStandardEditActions.h"
#import "UITextInput.h"

@class NSDictionary, NSObject<TSDTextInput>, NSString, TSDTextInputTokenizer, TSDTextPosition, UITextPosition, UITextRange, UIView;

@interface TSDTextInputResponder : UIResponder <UITextInput, UIResponderStandardEditActions>
{
    NSObject<TSDTextInput> *_editor;
    TSDTextInputTokenizer *_tokenizer;
    _Bool _isResigning;
    int _respondingToUITextInput;
    _Bool _isSettingSelectedTextRange;
    float _preferredStartPosition;
    float _preferredEndPosition;
    TSDTextPosition *_referencePosition;
    long long _referenceOffset;
    TSDTextPosition *_cachedPosition;
    _Bool _pendingEditorChange;
    NSObject<TSDTextInput> *_pendingEditor;
    _Bool _pendingFirstResponderChange;
    id <TSDTextInput> _pendingFirstResponderObject;
    _Bool _inDynamicOperation;
    UIResponder *_nextResponder;
    id <UITextInputDelegate> _inputDelegate;
    _Bool _editorRespondsToRawArrowKeySelectors;
    int _ignoreKeyboardInputCount;
}

@property(nonatomic) float preferredEndPosition; // @synthesize preferredEndPosition=_preferredEndPosition;
@property(nonatomic) float preferredStartPosition; // @synthesize preferredStartPosition=_preferredStartPosition;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(retain, nonatomic) id <TSDTextInput> editor; // @synthesize editor=_editor;
- (id)superview;
@property(readonly, nonatomic) UIView *textInputView;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (void)p_didUndoRedoChangeNotification:(id)arg1;
- (void)p_willUndoChangeNotification:(id)arg1;
- (void)p_willShowPopoverNotification:(id)arg1;
- (void)editorDidChangeSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)editorDidChangeSelection:(id)arg1;
- (void)p_editorSelectionWasForciblyChangedNotification:(id)arg1;
- (void)p_editorWillHandleTapNotification:(id)arg1;
- (void)p_editorWillStyleTextNotification:(id)arg1;
- (void)p_editorWillClearSelectionNotification:(id)arg1;
- (void)p_editorDidInsertTextNotification:(id)arg1;
- (void)p_textChanged;
- (_Bool)p_wantRawArrowKeys;
- (void)p_finishDynamicOperation:(id)arg1;
- (void)p_startDynamicOperation:(id)arg1;
- (id)p_ICC;
- (id)inputAccessoryView;
- (id)inputView;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (void)deleteForward;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) long long autocorrectionType;
- (void)customAction8:(id)arg1;
- (void)customAction7:(id)arg1;
- (void)customAction6:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)delete:(id)arg1;
- (void)selectAll:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)p_currentEditorIsNotOnMyCanvas;
- (void)insertDictationResult:(id)arg1;
- (id)keyCommands;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)rectsForRange:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)p_unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)p_setSelectedTextRange:(id)arg1;
- (_Bool)p_isExecutingUITextInput;
- (void)p_willExitUITextInput;
- (_Bool)p_didEnterUITextInput;
- (_Bool)resignFirstResponder;
- (_Bool)p_resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)nextResponder;
- (void)acceptAutocorrection;
- (void)canvasWillRotate;
- (void)canvasWillZoom;
- (void)canvasWillScroll;
- (id)editingTextRep;
- (id)editingTextReps;
- (void)forceDelayedResponderChange;
- (void)cancelDelayedResponderChange;
- (void)changeFirstResponderIfNecessary;
- (void)resumeEditing;
- (void)clearEditorAndResignFirstResponder;
- (void)endIgnoringKeyboardInput;
- (void)beginIgnoringKeyboardInput;
- (void)p_setFirstResponderAndEditorAfterDelay;
- (void)p_setFirstResponderAndEditor:(id)arg1;
- (void)p_setFirstResponder:(id)arg1;
- (void)p_setFirstResponderAfterDelay;
- (_Bool)p_requiresFirstResponderChangeForEditor:(id)arg1;
- (void)p_setEditor:(id)arg1;
- (_Bool)_disableAutomaticKeyboardUI;
@property(readonly, nonatomic, getter=isResigning) _Bool resigning;
- (void)teardown;
- (void)dealloc;
- (id)initWithNextResponder:(id)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

