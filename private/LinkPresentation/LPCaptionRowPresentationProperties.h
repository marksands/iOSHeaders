//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LPCaptionPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject
{
    LPCaptionPresentationProperties *_leading;
    LPCaptionPresentationProperties *_trailing;
}

@property(readonly, retain, nonatomic) LPCaptionPresentationProperties *trailing; // @synthesize trailing=_trailing;
@property(readonly, retain, nonatomic) LPCaptionPresentationProperties *leading; // @synthesize leading=_leading;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasAnyContent;
- (id)right;
- (id)left;
- (id)init;

@end

