//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PGTitle;

@interface PGTitleTuple : NSObject
{
    PGTitle *_title;
    PGTitle *_subtitle;
}

@property(readonly, nonatomic) PGTitle *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) PGTitle *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2;

@end

