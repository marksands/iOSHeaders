//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUTitleDescriptionCell.h>

@class NSString;

@interface HUButtonCell : HUTitleDescriptionCell
{
    _Bool _destructive;
    _Bool _textColorFollowsTintColor;
    long long _textAlignment;
}

@property(nonatomic) _Bool textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
- (void)updateTitle;
- (void)didMoveToSuperview;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *descriptionText; // @dynamic descriptionText;

@end

