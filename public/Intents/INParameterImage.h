//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class INImage, INParameter;

@interface INParameterImage : NSObject <NSCopying>
{
    INParameter *_parameter;
    INImage *_image;
}

@property(readonly, copy, nonatomic) INImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) INParameter *parameter; // @synthesize parameter=_parameter;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameter:(id)arg1 image:(id)arg2;

@end

