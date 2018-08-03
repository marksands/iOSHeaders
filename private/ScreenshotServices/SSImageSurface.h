//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class NSString, UIImage;

@interface SSImageSurface : NSObject <BSXPCCoding>
{
    UIImage *_backingSurface;
    double _scale;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIImage *backingSurface; // @synthesize backingSurface=_backingSurface;
- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

