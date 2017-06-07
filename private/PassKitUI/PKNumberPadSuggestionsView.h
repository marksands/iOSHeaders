//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class NSArray, UIColor;
@protocol PKNumberPadSuggestionsViewDelegate;

@interface PKNumberPadSuggestionsView : UIStackView
{
    id <PKNumberPadSuggestionsViewDelegate> _delegate;
    NSArray *_suggestions;
    UIColor *_buttonTextColor;
}

@property(copy, nonatomic) UIColor *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) __weak id <PKNumberPadSuggestionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_selectedSuggestion:(id)arg1;
- (id)initWithDefaultFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

