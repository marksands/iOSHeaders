//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARAnchor.h>

@class ARReferenceImage;

@interface ARImageAnchor : ARAnchor
{
    ARReferenceImage *_referenceImage;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) ARReferenceImage *referenceImage; // @synthesize referenceImage=_referenceImage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
-     // Error parsing type: @88@0:8@16{?=[4]}24, name: initWithReferenceImage:transform:

@end

