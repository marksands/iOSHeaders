//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIStackView.h"

@class NSMutableArray;

@interface OBPrivacySplashListView : UIStackView
{
    _Bool _darkMode;
    NSMutableArray *_textViews;
    NSMutableArray *_stackedIconTextLists;
}

@property(retain, nonatomic) NSMutableArray *stackedIconTextLists; // @synthesize stackedIconTextLists=_stackedIconTextLists;
@property(retain, nonatomic) NSMutableArray *textViews; // @synthesize textViews=_textViews;
@property(nonatomic, getter=isDarkMode) _Bool darkMode; // @synthesize darkMode=_darkMode;
- (void).cxx_destruct;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2;

@end
