//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UIControl;
@protocol UITextInput;

@interface SearchUIKeyboardableTableViewController : UITableViewController
{
    _Bool _shouldHideTableCellsUnderKeyboard;
    UIControl<UITextInput> *_textField;
    double _keyboardHeight;
}

@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool shouldHideTableCellsUnderKeyboard; // @synthesize shouldHideTableCellsUnderKeyboard=_shouldHideTableCellsUnderKeyboard;
@property __weak UIControl<UITextInput> *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideCellsBelowKeyboardIfNecessary;
- (void)viewDidLayoutSubviews;
- (void)scrollIndexPathToVisible:(id)arg1;
- (void)moveCursorToPosition:(id)arg1;
- (void)moveCursorToEnd;
- (void)moveCursorToBeginning;
- (_Bool)canHighlightRowAtIndexPath:(id)arg1;
- (void)selectHighlightedRow;
- (id)indexPathForNextSelectableIndexPath:(id)arg1 upward:(_Bool)arg2;
- (void)highlightRowAtIndexPath:(id)arg1 upward:(_Bool)arg2;
- (void)downArrowPressed:(id)arg1;
- (void)upArrowPressed:(id)arg1;
- (void)returnPressed;
- (void)goBack;
- (void)deletePressed;
- (void)leftArrowPressed;
- (void)rightArrowPressed;
- (_Bool)isLeftToRightOrientation;
- (_Bool)isOnCard;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)addKeyCommandForKey:(id)arg1 action:(SEL)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)keyboardFrameChanged:(id)arg1;
- (id)init;

@end

