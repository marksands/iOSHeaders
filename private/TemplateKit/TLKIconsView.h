//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKIconsView : TLKStackView
{
    NSMutableArray *_imageViews;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (void)updateIcons:(id)arg1;
- (id)init;

@end

