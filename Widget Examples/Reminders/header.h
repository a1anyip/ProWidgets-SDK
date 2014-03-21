#import <EventKit/EventKit.h>
#import <libprowidgets/libprowidgets.h>
#import <libprowidgets/WidgetItems/items.h>

typedef enum {
	
	PWWidgetRemindersInterfaceAdd = 1,
	PWWidgetRemindersInterfaceOverview = 2
	
} PWWidgetRemindersInterface;

#define LOG(x,...) NSLog(@"***** [ProWidgets] %@",[NSString stringWithFormat:(x), ##__VA_ARGS__])
#define RELEASE(x) [x release], x = nil;
#define RELEASE_VIEW(x) [x removeFromSuperview], [x release], x = nil;

#define PWTransitionAnimationDuration .2

static inline void applyFadeTransition(UIView *view, CGFloat duration) {
	CATransition *transition = [CATransition animation];
	transition.duration = duration;
	transition.timingFunction = [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseInEaseOut];
	transition.type = kCATransitionFade;
	[view.layer addAnimation:transition forKey:@"fade"];
}