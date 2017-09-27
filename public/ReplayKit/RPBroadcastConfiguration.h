//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding>
{
    double _clipDuration;
    NSDictionary *_videoCompressionProperties;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *videoCompressionProperties; // @synthesize videoCompressionProperties=_videoCompressionProperties;
@property(nonatomic) double clipDuration; // @synthesize clipDuration=_clipDuration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

