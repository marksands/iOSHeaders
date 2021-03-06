//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class UIImage;

@interface CPImageSet : NSObject <NSSecureCoding>
{
    UIImage *_lightContentImage;
    UIImage *_darkContentImage;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIImage *darkContentImage; // @synthesize darkContentImage=_darkContentImage;
@property(retain, nonatomic) UIImage *lightContentImage; // @synthesize lightContentImage=_lightContentImage;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithLightContentImage:(id)arg1 darkContentImage:(id)arg2;

@end

