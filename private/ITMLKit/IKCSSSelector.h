//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IKCSSSelector : NSObject
{
    long long _type;
    NSString *_name;
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *stringValue;

@end

