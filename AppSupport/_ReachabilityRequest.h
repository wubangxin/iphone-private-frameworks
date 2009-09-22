/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>
#import "AppSupport-Structs.h"

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {
	NSLock* _lock;
	NSString* _hostname;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	CFDictionaryRef _observers;
	BOOL _isReachable;
	BOOL _receivedAtLeastOneCallback;
}
@property(assign, nonatomic) NSString* hostname;
-(id)initWithHostname:(id)hostname;
// inherited: -(void)dealloc;
// inherited: -(id)description;
-(void)reachabilityChangedWithFlags:(unsigned)flags;
-(void)addObserver:(id)observer selector:(SEL)selector;
-(void)removeObserver:(id)observer;
-(BOOL)hasObservers;
@end
