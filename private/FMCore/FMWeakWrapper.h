//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FMWeakWrapper : NSObject <NSCopying>
{
    id _object;
    unsigned long long _objectHash;
}

@property(nonatomic) unsigned long long objectHash; // @synthesize objectHash=_objectHash;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

