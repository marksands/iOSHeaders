//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGTitle : NSObject
{
    NSString *_stringValue;
    long long _category;
}

+ (id)titleWithString:(id)arg1 category:(long long)arg2;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end

