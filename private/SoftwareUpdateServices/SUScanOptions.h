//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableSet, NSSet, NSString;

@interface SUScanOptions : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    _Bool _forced;
    NSMutableSet *_types;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *types; // @synthesize types=_types;
@property(nonatomic, getter=isForced) _Bool forced; // @synthesize forced=_forced;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)clearTypes;
- (_Bool)findsAnyUpdate;
- (_Bool)containsType:(int)arg1;
- (void)removeType:(int)arg1;
- (void)addType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

