//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SKUISizeValue : NSObject <NSCopying>
{
    long long _height;
    long long _width;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)unionWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithSize:(struct CGSize)arg1;

@end

