//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface ILMessageFilterQueryResponse : NSObject <NSSecureCoding>
{
    long long _action;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToQueryResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

