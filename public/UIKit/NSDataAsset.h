//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CUINamedData, NSData, NSString;

@interface NSDataAsset : NSObject <NSCopying>
{
    CUINamedData *_namedData;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 bundle:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

