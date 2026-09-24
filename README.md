author: Mr.Somnath Ghorai <br>
vs code to gitHub
    # ধাপ ১: পরিবর্তন হওয়া সব ফাইল ট্র্যাক (Stage) করা
git add .

# ধাপ ২: কী পরিবর্তন করেছেন তার একটি সংক্ষিপ্ত মেসেজসহ সেভ (Commit) করা
git commit -m "Added new example program in Compilation Process"

# ধাপ ৩: লোকাল পরিবর্তনগুলো GitHub-এ আপলোড (Push) করা
git push
for status ..
git status


গিটহাবের সমস্ত নতুন পরিবর্তন পিসিতে নামিয়ে আনতে
git pull origin main --rebase
যদি git pull দেওয়ার সময় কখনো "Cannot rebase" বা "Unmerged paths" জাতীয় এরর দেখায়, তবে
# গিটহাবের তথ্য আপডেট করে দেখতে
git fetch origin

# আপনার লোকাল ব্রাঞ্চকে রিবেস করতে
git pull origin main --rebase
