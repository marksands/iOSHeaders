//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class NSString, NSURL;

@interface HFURLItem : HFItem
{
    NSURL *_URL;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 URL:(id)arg2;

@end

