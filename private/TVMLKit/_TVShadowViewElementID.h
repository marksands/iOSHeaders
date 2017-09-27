//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElementID : NSObject <NSCopying>
{
    IKViewElement *_viewElement;
    NSString *_itemID;
}

@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithViewElement:(id)arg1;

@end

