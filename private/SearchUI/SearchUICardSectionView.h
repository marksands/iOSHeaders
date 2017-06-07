//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL, SFCardSection, SearchUICardViewController;

@interface SearchUICardSectionView : UIView
{
    _Bool _hideSeparatorBelow;
    _Bool _fullWidthSeparator;
    SearchUICardViewController *_controller;
    unsigned long long _style;
    NSURL *_url;
    SFCardSection *_section;
}

+ (Class)classForSection:(id)arg1;
@property(retain, nonatomic) SFCardSection *section; // @synthesize section=_section;
@property(nonatomic) _Bool fullWidthSeparator; // @synthesize fullWidthSeparator=_fullWidthSeparator;
@property(nonatomic) _Bool hideSeparatorBelow; // @synthesize hideSeparatorBelow=_hideSeparatorBelow;
@property(retain) NSURL *url; // @synthesize url=_url;
@property unsigned long long style; // @synthesize style=_style;
@property __weak SearchUICardViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (_Bool)isAutoLayoutFree;
- (double)separatorLeftInset;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2 style:(unsigned long long)arg3;
- (id)initWithCardSection:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2;

@end
