//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCROBrailleEvent : NSObject
{
    int _type;
    id _data;
    id _data2;
    id _data3;
    _Bool _shouldDisplay;
}

+ (id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
+ (id)eventWithType:(int)arg1 data:(id)arg2;
@property(nonatomic) _Bool shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
- (void).cxx_destruct;
- (id)description;
- (id)data3;
- (id)data2;
- (id)data;
- (int)type;
- (id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;

@end

